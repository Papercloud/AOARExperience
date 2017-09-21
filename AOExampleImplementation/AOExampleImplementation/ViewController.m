//
//  ViewController.m
//  AOExampleImplementation
//
//  Created by ChristianBieniak on 31/7/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import "ViewController.h"

#import <AOARExperience/AOARExperience.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)openARExperience:(id)sender {
    [self presentViewController:[BSWARExperienceViewController instance]
                       animated:YES
                     completion:nil];
}

@end
