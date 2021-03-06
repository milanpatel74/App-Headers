/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/BITHockeyBaseManager.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSFileManager, NSMutableData, NSURLConnection, BITPLCrashReporter;

@interface BITCrashManager : BITHockeyBaseManager {

	NSMutableDictionary* _approvedCrashReports;
	NSMutableArray* _crashFiles;
	NSString* _crashesDir;
	NSString* _settingsFile;
	NSString* _analyzerInProgressFile;
	NSFileManager* _fileManager;
	BOOL _crashIdenticalCurrentVersion;
	NSMutableData* _responseData;
	long long _statusCode;
	NSURLConnection* _urlConnection;
	BOOL _sendingInProgress;
	BOOL _isSetup;
	id _appDidBecomeActiveObserver;
	id _networkDidBecomeReachableObserver;
	BOOL _enableMachExceptionHandler;
	BOOL _showAlwaysButton;
	BOOL _didCrashInLastSession;
	BOOL _installationIdentified;
	id _delegate;
	unsigned long long _crashManagerStatus;
	double _timeintervalCrashInLastSessionOccured;
	/*function pointer*/void* _exceptionHandler;
	BITPLCrashReporter* _plCrashReporter;
	NSString* _installationIdentification;
	unsigned long long _installationIdentificationType;

}

@property (assign,nonatomic,__weak) id delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long crashManagerStatus;                                             //@synthesize crashManagerStatus=_crashManagerStatus - In the implementation block
@property (assign,getter=isMachExceptionHandlerEnabled,nonatomic) BOOL enableMachExceptionHandler;              //@synthesize enableMachExceptionHandler=_enableMachExceptionHandler - In the implementation block
@property (assign,getter=shouldShowAlwaysButton,nonatomic) BOOL showAlwaysButton;                               //@synthesize showAlwaysButton=_showAlwaysButton - In the implementation block
@property (nonatomic,readonly) BOOL didCrashInLastSession;                                                      //@synthesize didCrashInLastSession=_didCrashInLastSession - In the implementation block
@property (nonatomic,readonly) double timeintervalCrashInLastSessionOccured;                                    //@synthesize timeintervalCrashInLastSessionOccured=_timeintervalCrashInLastSessionOccured - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* exceptionHandler;                                        //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,retain) BITPLCrashReporter * plCrashReporter;                                              //@synthesize plCrashReporter=_plCrashReporter - In the implementation block
@property (nonatomic,retain) NSString * installationIdentification;                                             //@synthesize installationIdentification=_installationIdentification - In the implementation block
@property (assign,nonatomic) unsigned long long installationIdentificationType;                                 //@synthesize installationIdentificationType=_installationIdentificationType - In the implementation block
@property (assign,nonatomic) BOOL installationIdentified;                                                       //@synthesize installationIdentified=_installationIdentified - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                                                       //@synthesize fileManager=_fileManager - In the implementation block
-(void)unregisterObservers;
-(BOOL)installationIdentified;
-(NSString *)installationIdentification;
-(unsigned long long)installationIdentificationType;
-(void)registerObservers;
-(void)setInstallationIdentificationType:(unsigned long long)arg1 ;
-(void)setInstallationIdentification:(NSString *)arg1 ;
-(void)setInstallationIdentified:(BOOL)arg1 ;
-(void)triggerDelayedProcessing;
-(BITPLCrashReporter *)plCrashReporter;
-(id)userNameForCrashReport;
-(id)userEmailForCrashReport;
-(id)userIDForCrashReport;
-(void)invokeDelayedProcessing;
-(void)sendCrashReports;
-(BOOL)hasNonApprovedCrashReports;
-(BOOL)shouldShowAlwaysButton;
-(BOOL)isMachExceptionHandlerEnabled;
-(void)setPlCrashReporter:(BITPLCrashReporter *)arg1 ;
-(void)handleCrashReport;
-(BOOL)isDebuggerAttached;
-(id)extractAppUUIDs:(id)arg1 ;
-(void)postXML:(id)arg1 ;
-(void)cleanCrashReports;
-(void)setCrashManagerStatus:(unsigned long long)arg1 ;
-(unsigned long long)crashManagerStatus;
-(void)setEnableMachExceptionHandler:(BOOL)arg1 ;
-(void)setShowAlwaysButton:(BOOL)arg1 ;
-(BOOL)didCrashInLastSession;
-(double)timeintervalCrashInLastSessionOccured;
-(BOOL)hasPendingCrashReport;
-(void)startManager;
-(/*function pointer*/void*)exceptionHandler;
-(void)loadSettings;
-(void)saveSettings;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)setExceptionHandler:(/*function pointer*/void*)arg1 ;
@end

