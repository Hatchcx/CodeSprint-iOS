//
//  PopupSettingsViewController.h
//  CodeSprint
//
//  Created by Vincent Chau on 8/9/16.
//  Copyright © 2016 Vincent Chau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Artifacts.h"

@interface PopupSettingsViewController : UIViewController

@property (nonatomic) NSInteger currentIndex;
@property (nonatomic) NSInteger indexPath;
@property (strong, nonatomic) Artifacts *currentArtifact;
@property (nonatomic) NSInteger selectedIndex;
@property (strong, nonatomic) NSString *scrumKey;

@end
