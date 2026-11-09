/* IL2CPP: Rotatelab.UI.PreGame.<>c__DisplayClass4_0$$<OnArtworkSetHandler>b__0
void Rotatelab_UI_PreGame___c__DisplayClass4_0___OnArtworkSetHandler_b__0 (Rotatelab_UI_PreGame___c__DisplayClass4_0_o* __this, UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_Sprite__o handle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreGame.<>c__DisplayClass4_0$$<OnArtworkSetHandler>b__0
   void Rotatelab_UI_PreGame___c__DisplayClass4_0___OnArtworkSetHandler_b__0
   (Rotatelab_UI_PreGame___c__DisplayClass4_0_o* __this,
   UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_Sprite__o handle, const
   MethodInfo* method); */

void Rotatelab_UI_PreGame___c__DisplayClass4_0___OnArtworkSetHandler_b__0_112cfd4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0113d198 + 0x113cff0);
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d19c + 0x113d00c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d1a0 + 0x113d018));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d1a4 + 0x113d024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d1a8 + 0x113d030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d1ac + 0x113d03c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d1b0 + 0x113d048));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d1b4 + 0x113d054));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_0113d1b8 + 0x113d068) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___Equals_17b6934
                      (&uStack_1c,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),
                       *(undefined4 *)(iVar1 + 0x24),**(undefined4 **)(_UNK_0113d1bc + 0x113d0b4));
    if ((iVar1 != 0) &&
       (iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___get_Status_17b6e70
                          (&uStack_1c,**(undefined4 **)(_UNK_0113d1c0 + 0x113d0d8)), iVar1 == 1)) {
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
      uVar3 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___get_Result_17b6e14
                        (&uStack_1c,**(undefined4 **)(_UNK_0113d1c4 + 0x113d104));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc(iVar1,uVar3,0);
    }
    iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___IsValid_17b6c30
                      (param_1 + 0xc,**(undefined4 **)(_UNK_0113d1c8 + 0x113d13c));
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_0113d1cc + 0x113d158) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_AddressableAssets_Addressables__Release_object__13a0e24
                (uVar4,uVar5,uVar3,**(undefined4 **)(_UNK_0113d1d0 + 0x113d188));
    }
  }
  return;
}

