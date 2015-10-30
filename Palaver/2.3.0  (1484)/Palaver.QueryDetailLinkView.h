/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface Palaver.QueryDetailLinkView : UIView {

	 link;
	 state;
	 cancel;
	 childView;

}

@property (copy,nonatomic) id cancel; 
@property (assign,__weak,nonatomic) UIView * childView; 
-(UIView *)childView;
-(void)setChildView:(UIView *)arg1 ;
-(void)requestImage:(id)arg1 ;
-(void)requestGitHubIssue:(id)arg1 repository:(id)arg2 number:(long long)arg3 pull:(BOOL)arg4 ;
-(id)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)request;
-(void)setCancel:(id)arg1 ;
-(void)openLink;
@end
