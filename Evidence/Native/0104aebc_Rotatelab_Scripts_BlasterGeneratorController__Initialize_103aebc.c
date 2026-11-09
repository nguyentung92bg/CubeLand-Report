/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$Initialize
void Rotatelab_Scripts_BlasterGeneratorController__Initialize (Rotatelab_Scripts_BlasterGeneratorController_o* __this, System_Collections_Generic_List_BlasterData__o* innerData, Rotatelab_Scripts_BlasterController_o* blasterPrefab, Rotatelab_Pool_BulletPool_o* bulletPool, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$Initialize
   void Rotatelab_Scripts_BlasterGeneratorController__Initialize
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this,
   System_Collections_Generic_List_BlasterData__o* innerData, Rotatelab_Scripts_BlasterController_o*
   blasterPrefab, Rotatelab_Pool_BulletPool_o* bulletPool, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterGeneratorController__Initialize_103aebc
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0104b17c + 0x104aee0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b180 + 0x104aef4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b184 + 0x104af00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b188 + 0x104af0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b18c + 0x104af18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b190 + 0x104af24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b194 + 0x104af30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b198 + 0x104af3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b19c + 0x104af48));
    *pcVar7 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104b1a0 + 0x104af68));
  System_Collections_Generic_List_object____ctor_267d2e8
            (iVar1,uVar8,**(undefined4 **)(_UNK_0104b1a4 + 0x104af84));
  piVar2 = (int *)(param_1 + 0x5c);
  *piVar2 = iVar1;
  thunk_FUN_00ec5080(piVar2,iVar1);
  if (0 < *(int *)(param_2 + 0xc)) {
    iVar1 = 0;
    do {
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (param_2,iVar1,**(undefined4 **)(_UNK_0104b1a8 + 0x104afc0));
      uVar8 = *(undefined4 *)(param_1 + 0x44);
      if (*(int *)(**(int **)(_UNK_0104b1ac + 0x104afd8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      piVar4 = (int *)UnityEngine_Object__Instantiate_object__14d4e4c
                                (param_3,uVar8,0,**(undefined4 **)(_UNK_0104b1b0 + 0x104b000));
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar4[6] = iVar3;
      thunk_FUN_00ec5080(piVar4 + 6,iVar3);
      uVar10 = *(undefined4 *)(param_1 + 0x24);
      iVar1 = iVar1 + 1;
      iStack_28 = iVar1;
      uVar8 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0104b1b4 + 0x104b040) + 0x24),&iStack_28);
      iVar3 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_0104b1b8 + 0x104b060),uVar10,uVar8,0);
      piVar4[9] = iVar3;
      thunk_FUN_00ec5080();
      piVar4[0x2e] = param_1;
      thunk_FUN_00ec5080(piVar4 + 0x2e,param_1);
      (**(code **)(*piVar4 + 0x108))(piVar4,param_4,*(undefined4 *)(*piVar4 + 0x10c));
      Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters_103252c(piVar4);
      Rotatelab_Scripts_BlasterController__RefreshAllChainedBlasters_1032790(piVar4);
      iVar3 = UnityEngine_Component__get_gameObject_35fe360(piVar4,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
      iVar3 = *piVar2;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar9 = *(uint *)(iVar3 + 0xc);
      piVar5 = *(int **)(_UNK_0104b1bc + 0x104b10c);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar9 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar9 + 1;
        piVar5 = (int *)(iVar6 + uVar9 * 4 + 0x10);
        *piVar5 = (int)piVar4;
        thunk_FUN_00ec5080(piVar5,piVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar3,piVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
      }
    } while (iVar1 < *(int *)(param_2 + 0xc));
  }
  Rotatelab_Scripts_BlasterGeneratorController__UpdateRemainingBlastersText_103b1c0(param_1);
  Rotatelab_Scripts_BlasterGeneratorController__TryExposeNextBlaster_103b240(param_1);
  return;
}

