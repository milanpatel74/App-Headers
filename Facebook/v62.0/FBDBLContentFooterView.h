/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBDBLContentFooterView : UIView {

	UIView* _content;
	UIView* _footer;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (nonatomic,readonly) UIView * content;                          //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) UIView * footer;                           //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumEdgeInsets;              //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
-(void)setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(id)initWithContent:(id)arg1 footer:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)content;
-(UIView *)footer;
@end
