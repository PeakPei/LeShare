//
//  SelectTypeTableViewCell.h
//  LeShare
//
//  Created by 吴雪琴 on 2017/5/3.
//  Copyright © 2017年 wxq. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVObject;

@interface SelectTypeTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *dateLabel;
@property(nonatomic,strong)UILabel *tittleLabel;
@property(nonatomic,strong)UILabel *infoLabel;
@property(nonatomic,strong)UIImageView *imageV;

@property(nonatomic,strong)AVObject *objct;

@end
