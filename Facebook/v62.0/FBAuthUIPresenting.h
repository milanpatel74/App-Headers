/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAuthUIPresenting <NSObject>
@property (assign,nonatomic,__weak) id<FBAuthUIPresenterAnimationDelegate> animationDelegate; 
@required
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
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

@end
