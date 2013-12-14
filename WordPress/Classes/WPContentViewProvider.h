//
//  WPContentViewProvider.h
//  WordPress
//
//  Created by Michael Johnston on 12/12/13.
//  Copyright (c) 2013 WordPress. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WPContentViewProvider <NSObject>
- (NSString *)titleForDisplay;
- (NSString *)authorForDisplay;
- (NSString *)blogNameForDisplay;
- (NSString *)statusForDisplay;
- (NSString *)contentForDisplay;
- (NSString *)contentPreviewForDisplay;
- (NSURL *)blavatarURLForDisplay;
- (NSString *)gravatarEmailForDisplay;
- (NSDate *)dateForDisplay;
@end