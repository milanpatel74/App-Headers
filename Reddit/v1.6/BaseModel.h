/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSHashTable;

@interface BaseModel : NSObject <NSSecureCoding> {

	BOOL _isObservingChanges;
	NSString* _pk;
	NSHashTable* _currentObservers;

}

@property (nonatomic,retain) NSHashTable * currentObservers;              //@synthesize currentObservers=_currentObservers - In the implementation block
@property (assign,nonatomic) BOOL isObservingChanges;                     //@synthesize isObservingChanges=_isObservingChanges - In the implementation block
@property (nonatomic,copy) NSString * pk;                                 //@synthesize pk=_pk - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)pk;
-(void)registerObserverForUpdates:(id)arg1 ;
-(void)setPk:(NSString *)arg1 ;
-(void)removeObserverForUpdates:(id)arg1 ;
-(id)selectorsToObserveChanges;
-(void)setIsObservingChanges:(BOOL)arg1 ;
-(void)notifyObserversForUpdatedModel;
-(NSHashTable *)currentObservers;
-(void)setCurrentObservers:(NSHashTable *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(void)stopObservingChanges;
@end
