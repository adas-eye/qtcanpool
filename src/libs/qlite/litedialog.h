/***************************************************************************
 **
 **  Copyright (C) 2019-2020 MaMinJie <canpool@163.com>
 **  Contact: https://github.com/canpool
 **           https://gitee.com/icanpool
 **
 **  GNU Lesser General Public License Usage
 **  Alternatively, this file may be used under the terms of the GNU Lesser
 **  General Public License version 3 as published by the Free Software
 **  Foundation and appearing in the file LICENSE.LGPL3 included in the
 **  packaging of this file. Please review the following information to
 **  ensure the GNU Lesser General Public License version 3 requirements
 **  will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
 **
 **  GNU General Public License Usage
 **  Alternatively, this file may be used under the terms of the GNU
 **  General Public License version 2.0 or (at your option) the GNU General
 **  Public license version 3 or any later version approved by the KDE Free
 **  Qt Foundation. The licenses are as published by the Free Software
 **  Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
 **  included in the packaging of this file. Please review the following
 **  information to ensure the GNU General Public License requirements will
 **  be met: https://www.gnu.org/licenses/gpl-2.0.html and
 **  https://www.gnu.org/licenses/gpl-3.0.html.
 **
****************************************************************************/
#ifndef LITEDIALOG_H
#define LITEDIALOG_H

#include <QDialog>
#include "qlite_global.h"

QLITE_BEGIN_NAMESPACE

class LiteBar;
class LiteDialogPrivate;

class QLITE_SHARED_EXPORT LiteDialog : public QDialog
{
    Q_OBJECT
public:
    explicit LiteDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~LiteDialog();

    LiteBar *liteBar() const;

    QLayout *layout() const;
    void setLayout(QLayout *layout);

    void setFixedSize(const QSize &s);
    void setFixedSize(int w, int h);
    void setFixedWidth(int w);
    void setFixedHeight(int h);

    void setWindowFlags(Qt::WindowFlags type);

private:
    LiteDialogPrivate *d;
};

QLITE_END_NAMESPACE

#endif // LITEDIALOG_H
