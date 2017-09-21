//
//  NSString+AOARExperience.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 8/30/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (AOARExperience)

- (NSAttributedString *)characterSpacedAttributedString;
- (NSAttributedString *)attributedStringWithLineSpacing:(CGFloat)lineSpacing;

@end

