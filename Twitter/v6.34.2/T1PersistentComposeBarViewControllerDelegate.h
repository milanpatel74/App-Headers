/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1PersistentComposeBarViewControllerDelegate <NSObject>
@optional
-(void)composeBarViewControllerDidBeginEditing:(id)arg1;

@required
-(void)composeBarViewController:(id)arg1 didCompose:(id)arg2;
-(BOOL)composeBarViewControllerShouldBeginEditingUponAppearing:(id)arg1;
-(void)composeBarViewControllerWillUpdateComposeBarFrame:(id)arg1;
-(void)composeBarViewController:(id)arg1 didUpdateComposeBarFrame:(CGRect)arg2;
-(CGRect*)composeBarViewController:(id)arg1 containingViewFrameAboveKeyboardFrame:(CGRect)arg2;

@end
