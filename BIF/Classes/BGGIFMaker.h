// Copyright 2014-present Ryan Gomba. All Rights Reserved.

#import "BGTextElement.h"

@interface BGGIFMaker : NSObject

+ (void)makeGIFWithPhotos:(NSArray *)photos
                 cropRect:(CGRect)cropRect
               outputSize:(CGFloat)outputSize
            frameDuration:(CGFloat)frameDuration
             textElements:(NSArray *)textElements
               completion:(void(^)(NSString *filePath))completion;

@end
