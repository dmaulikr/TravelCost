//
//  DateKeyboardViewController.h
//  TravelCost
//
//  Created by 横井朗 on 2013/10/07.
//  Copyright (c) 2013年 akira yokoi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DateKeyboardViewController : UIViewController
{
    UIDatePicker *datePicker;
}
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)valueChanged:(id)sender;

@end