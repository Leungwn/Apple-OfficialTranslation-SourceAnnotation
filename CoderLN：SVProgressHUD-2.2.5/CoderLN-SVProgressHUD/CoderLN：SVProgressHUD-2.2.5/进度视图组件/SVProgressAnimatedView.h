//
//  SVProgressAnimatedView.h
//  SVProgressHUD, https://github.com/SVProgressHUD/SVProgressHUD
//
//  Copyright (c) 2017-2018 Tobias Tiemerding. All rights reserved.
//

/**
 SVProgressAnimatedView继承自UIView类, 用于实现一个进度指示器,
 该类在.h文件中提供如下4个属性分别用于定义进度指示器的厚度、半径、颜色及进度
 */

#import <UIKit/UIKit.h>

@interface SVProgressAnimatedView : UIView

@property (nonatomic, assign) CGFloat radius;// 半径
@property (nonatomic, assign) CGFloat strokeThickness;// 厚度
@property (nonatomic, strong) UIColor *strokeColor;// 颜色
@property (nonatomic, assign) CGFloat strokeEnd;// 进度

@end
