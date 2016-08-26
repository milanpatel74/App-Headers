/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBHTMLAdDiagnosticsDelegate;
#import <Facebook/Facebook-Structs.h>
@class ASDisplayNode, NSObject;

@interface FBHTMLAdDiagnostics : NSObject {

	BOOL _isCancelled;
	ASDisplayNode* _webViewNode;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _workingQueue;
	id<FBHTMLAdDiagnosticsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBHTMLAdDiagnosticsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithWebViewNode:(id)arg1 callbackQueue:(id)arg2 ;
-(void)scheduleWithTimeIntervalSinceNow:(double)arg1 ;
-(void)_performDiagnosticsIfNecessary;
-(void)_validateScreenshotImage:(id)arg1 ;
-(BOOL)_screenshotImageMatchesEmptyAd:(id)arg1 bytesPerRow:(unsigned long long)arg2 imageSize:(CGSize)arg3 ;
-(BOOL)_screenshotImageMatchesInsetAd:(id)arg1 bytesPerRow:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBHTMLAdDiagnosticsDelegate>)arg1 ;
-(id<FBHTMLAdDiagnosticsDelegate>)delegate;
@end
