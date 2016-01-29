//
//  SJSReadingViewController.h
//  365_readingBible
//
//  Created by SunJishuai on 16/1/23.
//  Copyright (c) 2016年 SunJishuai. All rights reserved.
//

#import "RootViewController.h"
#import "SJSListViewController.h"
#import "SJSStatistricsViewController.h"
#import "HeadView.h"

@interface SJSReadingViewController : RootViewController
<SJSNavigationDelegate,
UITableViewDelegate,
UITableViewDataSource,
HeadViewDelegate
>
@property(nonatomic, retain) NSMutableArray* headViewArray;
@property(nonatomic, retain) NSMutableArray* showHeaderArray;
@end
