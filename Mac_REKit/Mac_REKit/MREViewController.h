/*
 MREViewController.h
 
 Copyright ©2012 Kazki Miura. All rights reserved.
*/

#import <Cocoa/Cocoa.h>


@interface MREViewController : NSViewController

// Property
@property (assign, nonatomic) IBOutlet NSTextField *label;

// Action
- (IBAction)changeBackgroundColorAction:(id)sender;

@end
