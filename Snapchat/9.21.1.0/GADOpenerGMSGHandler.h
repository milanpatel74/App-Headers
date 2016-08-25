//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADOpener;

@interface GADOpenerGMSGHandler : GADGMSGHandler
{
    GADOpener *_opener;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
@property(retain, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (_Bool)shouldUseCustomClose:(id)arg1;
- (unsigned long long)orientationFromParams:(id)arg1;
- (id)URLFromParams:(id)arg1;
- (void)actionOpenApp:(id)arg1;
- (void)actionExpand:(id)arg1;
- (void)actionOpenWebApp:(id)arg1;
- (void)actionOpenBrowser:(id)arg1;
- (void)actionOpenInAppPurchase:(id)arg1;
- (void)fetchInAppStore:(id)arg1;
- (void)actionOpenInAppStore:(id)arg1;
- (void)didReceiveOpenNotification:(id)arg1;
- (void)didReceiveClickNotification:(id)arg1;
- (id)initWithOpener:(id)arg1;

@end
