// Copyright 2014-present Ryan Gomba. All Rights Reserved.

typedef NS_ENUM(NSInteger, BGShareCellState) {
    BGShareCellStateNormal,
    BGShareCellStateSharing,
    BGShareCellStateShared,
};

@interface BGShareCell : UICollectionViewCell

@property (nonatomic, assign) BGShareCellState shareState;
@property (nonatomic, assign) CGFloat shareProgress;

- (void)setDefaultTitle:(NSString *)defaultTitle
           workingTitle:(NSString *)workingTitle
           successTitle:(NSString *)successTitle
              imageName:(NSString *)imageName;

@end
