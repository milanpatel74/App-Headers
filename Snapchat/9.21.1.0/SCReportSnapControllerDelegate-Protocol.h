//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCReportSnapController;

@protocol SCReportSnapControllerDelegate <NSObject>

@optional
- (void)reportSnapController:(SCReportSnapController *)arg1 didReportSnapWithId:(NSString *)arg2 reportReason:(unsigned long long)arg3;
- (void)reportSnapController:(SCReportSnapController *)arg1 didDismissReportSnapDialogForSnapWithId:(NSString *)arg2;
- (void)reportSnapController:(SCReportSnapController *)arg1 didShowReportSnapDialogForSnapWithId:(NSString *)arg2;
@end

