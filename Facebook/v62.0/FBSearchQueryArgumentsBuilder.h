/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FBSearchQueryArgumentsBuilder : NSObject {

	NSMutableDictionary* _filteredQueryArguments;
	NSString* _querySemantic;

}
-(id)setShouldReturnTopIndependentModulesOnly:(BOOL)arg1 ;
-(id)setAreTopIndependentModulesAlreadyShown:(BOOL)arg1 ;
-(id)setReactionContext:(id)arg1 ;
-(id)setExactMatch:(BOOL)arg1 ;
-(id)setSupportedExperiences:(id)arg1 ;
-(id)setSupportedRoles:(id)arg1 ;
-(id)setQuerySource:(id)arg1 ;
-(id)setModuleSizes:(id)arg1 ;
-(id)setCallsite:(id)arg1 ;
-(id)setTsid:(id)arg1 ;
-(id)setQuerySemantic:(id)arg1 ;
-(id)_setFilteredQueryArgument:(id)arg1 forKey:(id)arg2 emptyValue:(id)arg3 ;
-(id)init;
-(id)description;
-(id)setFilters:(id)arg1 ;
-(id)build;
@end
