//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

@class BITPLCrashReporter, NSFileManager, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, NSURLConnection;

@interface BITCrashManager : BITHockeyBaseManager
{
    NSMutableDictionary *_approvedCrashReports;
    NSMutableArray *_crashFiles;
    NSString *_crashesDir;
    NSString *_settingsFile;
    NSString *_analyzerInProgressFile;
    NSFileManager *_fileManager;
    _Bool _crashIdenticalCurrentVersion;
    NSMutableData *_responseData;
    long long _statusCode;
    NSURLConnection *_urlConnection;
    _Bool _sendingInProgress;
    _Bool _isSetup;
    id _appDidBecomeActiveObserver;
    id _networkDidBecomeReachableObserver;
    _Bool _enableMachExceptionHandler;
    _Bool _showAlwaysButton;
    _Bool _didCrashInLastSession;
    _Bool _installationIdentified;
    id _delegate;
    unsigned long long _crashManagerStatus;
    double _timeintervalCrashInLastSessionOccured;
    CDUnknownFunctionPointerType _exceptionHandler;
    BITPLCrashReporter *_plCrashReporter;
    NSString *_installationIdentification;
    unsigned long long _installationIdentificationType;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool installationIdentified; // @synthesize installationIdentified=_installationIdentified;
@property(nonatomic) unsigned long long installationIdentificationType; // @synthesize installationIdentificationType=_installationIdentificationType;
@property(retain, nonatomic) NSString *installationIdentification; // @synthesize installationIdentification=_installationIdentification;
@property(retain, nonatomic) BITPLCrashReporter *plCrashReporter; // @synthesize plCrashReporter=_plCrashReporter;
@property(nonatomic) CDUnknownFunctionPointerType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(readonly, nonatomic) double timeintervalCrashInLastSessionOccured; // @synthesize timeintervalCrashInLastSessionOccured=_timeintervalCrashInLastSessionOccured;
@property(readonly, nonatomic) _Bool didCrashInLastSession; // @synthesize didCrashInLastSession=_didCrashInLastSession;
@property(nonatomic, getter=shouldShowAlwaysButton) _Bool showAlwaysButton; // @synthesize showAlwaysButton=_showAlwaysButton;
@property(nonatomic, getter=isMachExceptionHandlerEnabled) _Bool enableMachExceptionHandler; // @synthesize enableMachExceptionHandler=_enableMachExceptionHandler;
@property(nonatomic) unsigned long long crashManagerStatus; // @synthesize crashManagerStatus=_crashManagerStatus;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)postXML:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)sendCrashReports;
- (void)startManager;
- (void)invokeDelayedProcessing;
- (void)triggerDelayedProcessing;
- (_Bool)hasPendingCrashReport;
- (_Bool)hasNonApprovedCrashReports;
- (void)handleCrashReport;
- (_Bool)isDebuggerAttached;
- (id)userEmailForCrashReport;
- (id)userNameForCrashReport;
- (id)userIDForCrashReport;
- (void)unregisterObservers;
- (void)registerObservers;
- (id)extractAppUUIDs:(id)arg1;
- (void)cleanCrashReports;
- (void)loadSettings;
- (void)saveSettings;
- (void)dealloc;
- (id)init;

@end

