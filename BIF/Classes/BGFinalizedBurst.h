// Copyright 2014-present Ryan Gomba. All Rights Reserved.

@interface BGFinalizedBurst : NSObject

- (instancetype)initWithPhotos:(NSArray *)photos
                      cropRect:(CGRect)cropRect
                    outputSize:(CGFloat)outputSize
                 frameDuration:(CGFloat)frameDuration
                  textElements:(NSArray *)textElements;

- (void)renderWithCompletion:(void (^)(NSString *filePath))completion;

@end
