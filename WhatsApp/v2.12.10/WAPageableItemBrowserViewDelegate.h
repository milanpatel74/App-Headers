/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol WAPageableItemBrowserViewDelegate <UIScrollViewDelegate>
@required
-(id)pageableItemBrowserView:(id)arg1 itemAtIndex:(long long)arg2;
-(long long)pageableItemCount:(id)arg1;
-(void)pageableItemBrowserViewCurrentIndexDidChange:(id)arg1;
-(void)pageableItemBrowserView:(id)arg1 wantsToDeleteItemAtIndex:(long long)arg2;
-(void)pageableItemBrowserView:(id)arg1 willBeginEditingAnimationForItemAtIndex:(long long)arg2;
-(void)pageableItemBrowserView:(id)arg1 didEndEditingAnimationForItemAtIndex:(long long)arg2;
-(void)pageableItemBrowserView:(id)arg1 willAnimateRotationOfItemAtIndex:(long long)arg2 angle:(float)arg3;
-(void)pageableItemBrowserView:(id)arg1 didFinishRotatingItemAtIndex:(long long)arg2;
-(void)pageableItemBrowserViewWillBeginFocusedTask:(id)arg1;
-(void)pageableItemBrowserViewDidEndFocusedTask:(id)arg1;
-(void)pageableItemBrowserViewDidScroll:(id)arg1;
-(BOOL)pageableItemBrowserViewKeyboardIsShown:(id)arg1;
-(void)pageableItemBrowserView:(id)arg1 didUpdateThumbnailOfItemAtIndex:(long long)arg2;
-(id)pageableItemBrowserViewContainingViewController:(id)arg1;

@end
