/*
 *  view-line.h
 *  Copyright (C) 2001-2009  Jim Evins <evins@snaught.com>.
 *
 *  This file is part of gLabels.
 *
 *  gLabels is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __VIEW_LINE_H__
#define __VIEW_LINE_H__

#include "view-object.h"
#include "label-line.h"

G_BEGIN_DECLS


#define GL_TYPE_VIEW_LINE            (gl_view_line_get_type ())
#define GL_VIEW_LINE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GL_TYPE_VIEW_LINE, glViewLine))
#define GL_VIEW_LINE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GL_TYPE_VIEW_LINE, glViewLineClass))
#define GL_IS_VIEW_LINE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GL_TYPE_VIEW_LINE))
#define GL_IS_VIEW_LINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GL_TYPE_VIEW_LINE))

typedef struct _glViewLine          glViewLine;
typedef struct _glViewLineClass     glViewLineClass;

typedef struct _glViewLinePrivate   glViewLinePrivate;

struct _glViewLine {
	glViewObject       parent_object;

	glViewLinePrivate *priv;
};

struct _glViewLineClass {
	glViewObjectClass  parent_class;
};


GType          gl_view_line_get_type (void) G_GNUC_CONST;

glViewObject  *gl_view_line_new      (glLabelLine *object,
                                      glView     *view);


/* cursor for creating line objects */
GdkCursor *gl_view_line_get_create_cursor (void);

/* Object creation handlers. */
void       gl_view_line_create_button_press_event   (glView *view,
                                                     gdouble x,
                                                     gdouble y);

void       gl_view_line_create_motion_event         (glView *view,
                                                     gdouble x,
                                                     gdouble y);

void       gl_view_line_create_button_release_event (glView *view,
                                                     gdouble x,
                                                     gdouble y);


G_END_DECLS

#endif /* __VIEW_LINE_H__ */



/*
 * Local Variables:       -- emacs
 * mode: C                -- emacs
 * c-basic-offset: 8      -- emacs
 * tab-width: 8           -- emacs
 * indent-tabs-mode: nil  -- emacs
 * End:                   -- emacs
 */