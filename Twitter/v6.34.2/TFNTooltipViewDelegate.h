/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTooltipViewDelegate <NSObject>
@optional
-(void)tooltipWillShow:(id)arg1;
-(void)tooltipDidShow:(id)arg1;
-(void)tooltipWillDismiss:(id)arg1;
-(void)tooltipDidDismiss:(id)arg1;

@required
-(BOOL)tooltipShouldShow:(id)arg1;
-(void)tooltipDidTap:(id)arg1;

@end
