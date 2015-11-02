/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMediaDataPresentationController.h>

@class NSMutableArray;

@interface WAMediaDataGridPresentationController : WAMediaDataPresentationController {

	NSMutableArray* _imageViews;

}
-(id)initWithChatCellData:(id)arg1 ;
-(void)cellDataMessagesDidChange;
-(void)transitionFromIndex:(unsigned long long)arg1 toCurrentIndexWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)indexAtPointInView:(CGPoint)arg1 ;
-(void)didUpdateImageAtIndex:(unsigned long long)arg1 completed:(BOOL)arg2 ;
-(id)currentImageView;
-(CGRect)frameForIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 inRect:(CGRect)arg3 ;
-(void)viewDidLayoutSubviews;
@end

