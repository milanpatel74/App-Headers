/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol NSObject;
@class NSString;

@interface FlurryPageViewDelegate : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate, UITableViewDelegate> {

	id<NSObject> _delegate;
	id _target;

}

@property (assign,nonatomic,__weak) id<NSObject> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id target;                                 //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createInvocationOnSelector:(SEL)arg1 target:(id)arg2 ;
+(void)createDelegateOnTarget:(id)arg1 ;
+(void)destroyDelegateOnTarget:(id)arg1 ;
-(void)setDelegate:(id<NSObject>)arg1 ;
-(void)dealloc;
-(id<NSObject>)delegate;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2 ;
-(void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3 ;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

