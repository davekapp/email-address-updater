//
//  EditorViewController.h
//  AddressEditor
//
//  Created by David Kapp on 2/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditorViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)updateEmail:(id)sender;
@end
