/*
 * Copyright (c) 2006 Stanford University.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Stanford University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

package net.tinyos.mviz;

import java.awt.*;


public class DMote
extends DShape 
implements DMoteModelListener
{
    
    private DDocument document;
    private DMoteModel model;
    
    public DMote(DMoteModel model, DDocument document, DLayer layer) {
        super(model, document, layer);
	this.document = document;
	this.model = model;
    }
    

    static int counter =0;
    public void paintShape(Graphics g) {
	int x = model.getLocX();
	int y = model.getLocY();
	//System.out.println("Mode " + layer.paintMode);
    	switch(layer.paintMode){
    	case DLayer.IMG:
	    Image img = model.getImage();
	    java.awt.MediaTracker tracker = new java.awt.MediaTracker(this);
	    tracker.addImage(img, 0);
	    if (document.selected == model) {
		g.setColor(Color.RED);
		g.fillOval(x-22, y-22, 44, 44);
	    }
	    g.drawImage(img, x-20, y-20, 40, 40, document.canvas);
	    try {tracker.waitForAll();}
	    catch(InterruptedException e){} 
	    //System.out.println("Draw image " + img + " " + x + " " + y + " " + img.getHeight(document.canvas) + " " + tracker.isErrorAny());

	    //img = model.getIcon().getImage();
	    //System.out.println("Draw image " + img + " " + x + " " + y);
	    //document.canvas.getGraphics().drawImage(img, x, y, this.model.root);
	    break;
    	case DLayer.OVAL:
	    if (document.selected != model) {
		g.setColor(Color.GRAY);
	    }
	    else {
		g.setColor(Color.RED);
	    }
	    counter++;
	    g.fillOval(x-20, y-20, 40, 40);
	    break;
    	case DLayer.TXT_MOTE:
	    g.setFont(new Font("Helvetica", Font.PLAIN, 8));
	    g.setColor(Color.BLACK);
	    g.drawString(document.sensed_motes.elementAt(layer.index) + ": " + (int)model.getValue(layer.index), x+22, y-2);
	    break;
	default:
    	}

    }

}


