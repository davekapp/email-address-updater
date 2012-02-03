//
//  ViewController.h
//  AddressEditor
//
//  Created by David Kapp on 2/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIPopoverControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *emailLabel;

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)popoverController;

@end
