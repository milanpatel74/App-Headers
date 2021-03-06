/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAuthUIPresenting <NSObject>
@property (assign,nonatomic,__weak) id<FBAuthUIPresenterAnimationDelegate> animationDelegate; 
@required
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2;
-(void)popTransientViewControllerAnimated:(BOOL)arg1;
-(void)pushTransientViewController:(id)arg1 animated:(BOOL)arg2;
-(void)setTopViewControllerIsTransient:(BOOL)arg1;
-(void)replaceTopViewController:(id)arg1 animated:(BOOL)arg2;
-(void)replaceAllWithViewController:(id)arg1 animated:(BOOL)arg2;
-(void)presentToastWithTitle:(id)arg1 message:(id)arg2;
-(void)resetStackOnNextPush;
-(void)resetPresenterForReuse;
-(void)dismissPresenter;
-(void)popViewControllerAnimated:(BOOL)arg1;
-(void)setAnimationDelegate:(id)arg1;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(id<FBAuthUIPresenterAnimationDelegate>)animationDelegate;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

