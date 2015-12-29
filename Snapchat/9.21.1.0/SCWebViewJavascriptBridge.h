//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCWebViewJavascriptBridge : NSObject
{
    id <SCPerforming> _mainPerformer;
    id <SCWebViewJavascriptBridgeDelegate> _delegate;
}

+ (id)shared;
@property(nonatomic) __weak id <SCWebViewJavascriptBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_openAppStoreLinkWithParameters:(id)arg1;
- (void)_playRemoteVideoWithParameters:(id)arg1;
- (id)initializationJS;
- (void)bridgeFunction:(id)arg1 parameters:(id)arg2;
- (id)initWithMainPerformer:(id)arg1;

@end

