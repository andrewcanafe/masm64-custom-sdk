IFNDEF MSI_INC
MSI_INC equ <1>

PROTO64 external,DllGetVersion, :QWORD
PROTO64 external,Migrate10CachedPackagesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Migrate10CachedPackagesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiAdvertiseProductA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiAdvertiseProductExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiAdvertiseProductExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiAdvertiseProductW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiAdvertiseScriptA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiAdvertiseScriptW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiApplyMultiplePatchesA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiApplyMultiplePatchesW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiApplyPatchA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiApplyPatchW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiBeginTransactionA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiBeginTransactionW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiCloseAllHandles, 
PROTO64 external,MsiCloseHandle, :QWORD
PROTO64 external,MsiCollectUserInfoA, :QWORD
PROTO64 external,MsiCollectUserInfoW, :QWORD
PROTO64 external,MsiConfigureFeatureA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiConfigureFeatureFromDescriptorA, :QWORD,:QWORD
PROTO64 external,MsiConfigureFeatureFromDescriptorW, :QWORD,:QWORD
PROTO64 external,MsiConfigureFeatureW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiConfigureProductA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiConfigureProductExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiConfigureProductExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiConfigureProductW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiCreateAndVerifyInstallerDirectory, :QWORD
PROTO64 external,MsiCreateRecord, :QWORD
PROTO64 external,MsiCreateTransformSummaryInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiCreateTransformSummaryInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseApplyTransformA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseApplyTransformW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseCommit, :QWORD
PROTO64 external,MsiDatabaseExportA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseExportW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseGenerateTransformA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseGenerateTransformW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseGetPrimaryKeysA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseGetPrimaryKeysW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseImportA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseImportW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseIsTablePersistentA, :QWORD,:QWORD
PROTO64 external,MsiDatabaseIsTablePersistentW, :QWORD,:QWORD
PROTO64 external,MsiDatabaseMergeA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseMergeW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseOpenViewA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDatabaseOpenViewW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDecomposeDescriptorA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDecomposeDescriptorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDeleteUserDataA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDeleteUserDataW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDetermineApplicablePatchesA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDetermineApplicablePatchesW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiDeterminePatchSequenceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDeterminePatchSequenceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiDoActionA, :QWORD,:QWORD
PROTO64 external,MsiDoActionW, :QWORD,:QWORD
PROTO64 external,MsiEnableLogA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnableLogW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnableUIPreview, :QWORD,:QWORD
PROTO64 external,MsiEndTransaction, :QWORD
PROTO64 external,MsiEnumClientsA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumClientsExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumClientsExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumClientsW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentCostsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentCostsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentQualifiersA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentQualifiersW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentsA, :QWORD,:QWORD
PROTO64 external,MsiEnumComponentsExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentsExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumComponentsW, :QWORD,:QWORD
PROTO64 external,MsiEnumFeaturesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumFeaturesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumPatchesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumPatchesExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumPatchesExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumPatchesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumProductsA, :QWORD,:QWORD
PROTO64 external,MsiEnumProductsExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumProductsExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumProductsW, :QWORD,:QWORD
PROTO64 external,MsiEnumRelatedProductsA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEnumRelatedProductsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiEvaluateConditionA, :QWORD,:QWORD
PROTO64 external,MsiEvaluateConditionW, :QWORD,:QWORD
PROTO64 external,MsiExtractPatchXMLDataA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiExtractPatchXMLDataW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiFormatRecordA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiFormatRecordW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetActiveDatabase, :QWORD
PROTO64 external,MsiGetComponentPathA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetComponentPathExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetComponentPathExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetComponentPathW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetComponentStateA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetComponentStateW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetDatabaseState, :QWORD
PROTO64 external,MsiGetFeatureCostA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureCostW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureStateA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureStateW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureUsageA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureUsageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureValidStatesA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFeatureValidStatesW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFileHashA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFileHashW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFileSignatureInformationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFileSignatureInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFileVersionA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetFileVersionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetLanguage, :QWORD
PROTO64 external,MsiGetLastErrorRecord, 
PROTO64 external,MsiGetMode, :QWORD,:QWORD
PROTO64 external,MsiGetPatchFileListA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPatchFileListW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPatchInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPatchInfoExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPatchInfoExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPatchInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductCodeA, :QWORD,:QWORD
PROTO64 external,MsiGetProductCodeFromPackageCodeA, :QWORD,:QWORD
PROTO64 external,MsiGetProductCodeFromPackageCodeW, :QWORD,:QWORD
PROTO64 external,MsiGetProductCodeW, :QWORD,:QWORD
PROTO64 external,MsiGetProductInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductInfoExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductInfoExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductInfoFromScriptA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductInfoFromScriptW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductPropertyA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetProductPropertyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPropertyA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetPropertyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetShortcutTargetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetShortcutTargetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetSourcePathA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetSourcePathW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetSummaryInformationA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetSummaryInformationW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetTargetPathA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetTargetPathW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetUserInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiGetUserInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiInstallMissingComponentA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiInstallMissingComponentW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiInstallMissingFileA, :QWORD,:QWORD
PROTO64 external,MsiInstallMissingFileW, :QWORD,:QWORD
PROTO64 external,MsiInstallProductA, :QWORD,:QWORD
PROTO64 external,MsiInstallProductW, :QWORD,:QWORD
PROTO64 external,MsiIsProductElevatedA, :QWORD,:QWORD
PROTO64 external,MsiIsProductElevatedW, :QWORD,:QWORD
PROTO64 external,MsiJoinTransaction, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiLoadStringA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiLoadStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiLocateComponentA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiLocateComponentW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiMessageBoxA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiMessageBoxExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiMessageBoxExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiMessageBoxW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiNotifySidChangeA, :QWORD,:QWORD
PROTO64 external,MsiNotifySidChangeW, :QWORD,:QWORD
PROTO64 external,MsiOpenDatabaseA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiOpenDatabaseW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiOpenPackageA, :QWORD,:QWORD
PROTO64 external,MsiOpenPackageExA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiOpenPackageExW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiOpenPackageW, :QWORD,:QWORD
PROTO64 external,MsiOpenProductA, :QWORD,:QWORD
PROTO64 external,MsiOpenProductW, :QWORD,:QWORD
PROTO64 external,MsiPreviewBillboardA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiPreviewBillboardW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiPreviewDialogA, :QWORD,:QWORD
PROTO64 external,MsiPreviewDialogW, :QWORD,:QWORD
PROTO64 external,MsiProcessAdvertiseScriptA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProcessAdvertiseScriptW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProcessMessage, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideAssemblyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideAssemblyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideComponentA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideComponentFromDescriptorA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideComponentFromDescriptorW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideComponentW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideQualifiedComponentA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideQualifiedComponentExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideQualifiedComponentExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiProvideQualifiedComponentW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiQueryComponentStateA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiQueryComponentStateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiQueryFeatureStateA, :QWORD,:QWORD
PROTO64 external,MsiQueryFeatureStateExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiQueryFeatureStateExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiQueryFeatureStateFromDescriptorA, :QWORD
PROTO64 external,MsiQueryFeatureStateFromDescriptorW, :QWORD
PROTO64 external,MsiQueryFeatureStateW, :QWORD,:QWORD
PROTO64 external,MsiQueryProductStateA, :QWORD
PROTO64 external,MsiQueryProductStateW, :QWORD
PROTO64 external,MsiRecordClearData, :QWORD
PROTO64 external,MsiRecordDataSize, :QWORD,:QWORD
PROTO64 external,MsiRecordGetFieldCount, :QWORD
PROTO64 external,MsiRecordGetInteger, :QWORD,:QWORD
PROTO64 external,MsiRecordGetStringA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordGetStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordIsNull, :QWORD,:QWORD
PROTO64 external,MsiRecordReadStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordSetInteger, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordSetStreamA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordSetStreamW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordSetStringA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiRecordSetStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiReinstallFeatureA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiReinstallFeatureFromDescriptorA, :QWORD,:QWORD
PROTO64 external,MsiReinstallFeatureFromDescriptorW, :QWORD,:QWORD
PROTO64 external,MsiReinstallFeatureW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiReinstallProductA, :QWORD,:QWORD
PROTO64 external,MsiReinstallProductW, :QWORD,:QWORD
PROTO64 external,MsiRemovePatchesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiRemovePatchesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSequenceA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSequenceW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetComponentStateA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetComponentStateW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetExternalUIA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetExternalUIRecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetExternalUIW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetFeatureAttributesA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetFeatureAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetFeatureStateA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetFeatureStateW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetInstallLevel, :QWORD,:QWORD
PROTO64 external,MsiSetInternalUI, :QWORD,:QWORD
PROTO64 external,MsiSetMode, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetOfflineContextW, :QWORD,:QWORD
PROTO64 external,MsiSetPropertyA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetPropertyW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetTargetPathA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSetTargetPathW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListAddMediaDiskA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListAddMediaDiskW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListAddSourceA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListAddSourceExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListAddSourceExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListAddSourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearAllA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearAllExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearAllExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearAllW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearMediaDiskA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearMediaDiskW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearSourceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListClearSourceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListEnumMediaDisksA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListEnumMediaDisksW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListEnumSourcesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListEnumSourcesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListForceResolutionA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListForceResolutionExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListForceResolutionExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListForceResolutionW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListGetInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListGetInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListSetInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSourceListSetInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSummaryInfoGetPropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSummaryInfoGetPropertyCount, :QWORD,:QWORD
PROTO64 external,MsiSummaryInfoGetPropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSummaryInfoPersist, :QWORD
PROTO64 external,MsiSummaryInfoSetPropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiSummaryInfoSetPropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiUseFeatureA, :QWORD,:QWORD
PROTO64 external,MsiUseFeatureExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiUseFeatureExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsiUseFeatureW, :QWORD,:QWORD
PROTO64 external,MsiVerifyDiskSpace, :QWORD
PROTO64 external,MsiVerifyPackageA, :QWORD
PROTO64 external,MsiVerifyPackageW, :QWORD
PROTO64 external,MsiViewClose, :QWORD
PROTO64 external,MsiViewExecute, :QWORD,:QWORD
PROTO64 external,MsiViewFetch, :QWORD,:QWORD
PROTO64 external,MsiViewGetColumnInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiViewGetErrorA, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiViewGetErrorW, :QWORD,:QWORD,:QWORD
PROTO64 external,MsiViewModify, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msi.inc
echo -----------------------------------------
ENDIF
