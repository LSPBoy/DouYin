//
//  DouYinLoading.h
//  DouYinLoading
//
//  Created by Object on 2018/12/3.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DouYinLoading : UIView

//显示方法
+ (instancetype)showInView:(UIView *)view;

//隐藏方法
+ (BOOL)hideInView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
