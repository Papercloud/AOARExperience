//
//  BSWLivestreamTableViewCell.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 11/29/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSWLivestreamTableViewCell : UITableViewCell

@property (nonatomic, readwrite) UIImage *thumbnail;
@property (nonatomic, readwrite) NSString *name;

+ (NSString *)reuseIdentifier;

@end

