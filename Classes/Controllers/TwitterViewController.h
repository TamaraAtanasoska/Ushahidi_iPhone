/*****************************************************************************
 ** Copyright (c) 2010 Ushahidi Inc
 ** All rights reserved
 ** Contact: team@ushahidi.com
 ** Website: http://www.ushahidi.com
 **
 ** GNU Lesser General Public License Usage
 ** This file may be used under the terms of the GNU Lesser
 ** General Public License version 3 as published by the Free Software
 ** Foundation and appearing in the file LICENSE.LGPL included in the
 ** packaging of this file. Please review the following information to
 ** ensure the GNU Lesser General Public License version 3 requirements
 ** will be met: http://www.gnu.org/licenses/lgpl.html.
 **
 **
 ** If you have questions regarding the use of this file, please contact
 ** Ushahidi developers at team@ushahidi.com.
 **
 *****************************************************************************/

#import <UIKit/UIKit.h>
#import "TableViewController.h"
#import "TextViewTableCell.h"
#import "SA_OAuthTwitterController.h"
#import "Bitly.h"

@class SA_OAuthTwitterEngine;
@class AlertView;

@interface TwitterViewController : TableViewController<TextViewTableCellDelegate, 
													   SA_OAuthTwitterControllerDelegate,
													   BitlyDelegate> {
@public
	UIBarButtonItem *cancelButton;
	UIBarButtonItem *doneButton;
	UIBarButtonItem *logoutButton;
	UIBarButtonItem *userButton;
	NSString *tweet;

@private
	SA_OAuthTwitterEngine		*twitter;
	Bitly						*bitly;
}

@property (nonatomic, retain) IBOutlet	UIBarButtonItem *cancelButton;
@property (nonatomic, retain) IBOutlet	UIBarButtonItem *doneButton;
@property (nonatomic, retain) IBOutlet	UIBarButtonItem *logoutButton;
@property (nonatomic, retain) IBOutlet	UIBarButtonItem *userButton;
@property (nonatomic, retain)			NSString *tweet;

- (IBAction) cancel:(id)sender;
- (IBAction) done:(id)sender;
- (IBAction) shorten:(id)sender;
- (IBAction) user:(id)sender; 
- (IBAction) logout:(id)sender; 

@end
