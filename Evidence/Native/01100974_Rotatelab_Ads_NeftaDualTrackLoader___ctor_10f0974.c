/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$.ctor
void Rotatelab_Ads_NeftaDualTrackLoader___ctor (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, System_String_o* defaultAdUnitId, System_String_o* optimizedAdUnitIdA, System_String_o* optimizedAdUnitIdB, int32_t adType, System_Action_string__o* load, System_Func_string__bool__o* isReady, System_Action_string__string__string__o* setExtraParameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$.ctor
   void Rotatelab_Ads_NeftaDualTrackLoader___ctor (Rotatelab_Ads_NeftaDualTrackLoader_o* __this,
   System_String_o* defaultAdUnitId, System_String_o* optimizedAdUnitIdA, System_String_o*
   optimizedAdUnitIdB, int32_t adType, System_Action_string__o* load, System_Func_string__bool__o*
   isReady, System_Action_string__string__string__o* setExtraParameter, const MethodInfo* method);
    */

void Rotatelab_Ads_NeftaDualTrackLoader___ctor_10f0974
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  pcVar7 = (char *)(_UNK_01100be8 + 0x11009a0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100bec + 0x11009c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100bf0 + 0x11009d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100bf4 + 0x11009dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100bf8 + 0x11009e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100bfc + 0x11009f4));
    *pcVar7 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  System_Object___ctor_2bb93bc(param_1,0);
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01100c00 + 0x1100a20),3);
  puVar8 = *(undefined4 **)(_UNK_01100c04 + 0x1100a34);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Rotatelab_Ads_NeftaDualTrackLoader_Track___ctor_10f24f4
            (iVar4,param_2,**(undefined4 **)(_UNK_01100c08 + 0x1100a50),0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if (piVar3[3] != 0) {
    piVar3[4] = iVar4;
    thunk_FUN_00ec5080(piVar3 + 4,iVar4);
    iVar4 = thunk_FUN_00f00cdc(*puVar8);
    Rotatelab_Ads_NeftaDualTrackLoader_Track___ctor_10f24f4
              (iVar4,param_3,**(undefined4 **)(_UNK_01100c0c + 0x1100ad0),1);
    if ((iVar4 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if (1 < (uint)piVar3[3]) {
      piVar3[5] = iVar4;
      thunk_FUN_00ec5080(piVar3 + 5,iVar4);
      iVar4 = thunk_FUN_00f00cdc(*puVar8);
      Rotatelab_Ads_NeftaDualTrackLoader_Track___ctor_10f24f4
                (iVar4,param_4,**(undefined4 **)(_UNK_01100c10 + 0x1100b40),1);
      if ((iVar4 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar6 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar6,0);
      }
      if (2 < (uint)piVar3[3]) {
        piVar3[6] = iVar4;
        thunk_FUN_00ec5080(piVar3 + 6,iVar4);
        *(int *)(param_1 + 8) = (int)piVar3;
        thunk_FUN_00ec5080((int *)(param_1 + 8),piVar3);
        *(undefined4 *)(param_1 + 0xc) = param_5;
        *(undefined4 *)(param_1 + 0x10) = param_6;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),param_6);
        *(undefined4 *)(param_1 + 0x14) = param_7;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),param_7);
        puVar8 = (undefined4 *)(param_1 + 0x18);
        *puVar8 = param_8;
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

