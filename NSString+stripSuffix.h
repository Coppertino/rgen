//
//  NSString+stripSuffix.h
//  rgen
//
//  Created by Mattias Wadman on 2011-02-17.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (stripSuffix)
- (NSString *)stripSuffix:(NSArray *)suffixes;
@end