/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

@property (assign,nonatomic) id<NSObject> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id target;                             //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createDelegateOnTarget:(id)arg1 ;
+(void)destroyDelegateOnTarget:(id)arg1 ;
+(id)createInvocationOnSelector:(SEL)arg1 target:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<NSObject>)arg1 ;
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
