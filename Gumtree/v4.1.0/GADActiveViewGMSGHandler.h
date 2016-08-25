/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADGMSGHandler.h>

@protocol GADActiveViewGMSGHandlerDelegate;
@interface GADActiveViewGMSGHandler : GADGMSGHandler {

	id<GADActiveViewGMSGHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GADActiveViewGMSGHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)actionBlockDictionary;
-(void)didReceiveActiveViewUntrackActiveViewNotification:(id)arg1 ;
-(void)didReceiveActiveViewVisibilityChangedNotification:(id)arg1 ;
-(void)setDelegate:(id<GADActiveViewGMSGHandlerDelegate>)arg1 ;
-(id<GADActiveViewGMSGHandlerDelegate>)delegate;
@end
