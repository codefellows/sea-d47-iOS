//
//  SearchJSONParser.h
//  StackOverflowClient
//
//  Created by nacnud on 12/7/15.
//  Copyright © 2015 Adam Wallraff. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@interface SOSearchJSONParser : NSObject
+(void)questionsArrayFromDictionary:(NSDictionary*)dictionary completionHandler:(kNSArrayCompletionHandler)completionHandler;
@end
