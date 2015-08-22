/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTokenDictionary.h>
#import <Twitter/TFSTwitterModel.h>

@class NSString;

@interface TFNTwitterTypeaheadTokenDictionary : TFNTwitterTokenDictionary <TFSTwitterModel> {

	BOOL _listeningForUserUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeaheadTokenDictionaryWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)entryClasses;
+(id)typeaheadTokensWithString:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)beginListeningForUserUpdates;
-(id)oneClickEntries;
-(void)_tokenizeArray:(id)arg1 withClass:(Class)arg2 ;
-(void)encodeToMutableData:(id)arg1 ;
-(void)addTypeaheadObject:(id)arg1 prioritize:(BOOL)arg2 ;
-(void)_didChangeRelationshipForUser:(id)arg1 ;
-(void)endListeningForUserUpdates;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)addUser:(id)arg1 ;
@end
