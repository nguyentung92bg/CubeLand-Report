/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$<DistributeJewelHeists>g__TryAddBlaster|44_0
void Rotatelab_Scripts_PlaceableManager___DistributeJewelHeists_g__TryAddBlaster_44_0 (Rotatelab_Scripts_BlasterController_o* blaster, Rotatelab_Scripts_PlaceableManager___c__DisplayClass44_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$<DistributeJewelHeists>g__TryAddBlaster|44_0
   void Rotatelab_Scripts_PlaceableManager___DistributeJewelHeists_g__TryAddBlaster_44_0
   (Rotatelab_Scripts_BlasterController_o* blaster,
   Rotatelab_Scripts_PlaceableManager___c__DisplayClass44_0_o* , const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___DistributeJewelHeists_g__TryAddBlaster_44_0_1042838
               (int *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  
  pcVar6 = (char *)(_UNK_01052954 + 0x1052850);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01052958 + 0x1052864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105295c + 0x1052870));
    *pcVar6 = '\x01';
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_01052960 + 0x105288c) + 0xb8);
  if ((((*(byte *)(*param_1 + 0xb8) < uVar4) ||
       (*(int *)(*(int *)(*param_1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_01052960 + 0x105288c)
       )) && (iVar3 = Rotatelab_Scripts_BlasterController__get_IsIced_1030e20(param_1,0), iVar3 == 0
             )) && (*(char *)((int)param_1 + 0xc2) == '\0')) {
    iVar3 = param_1[0x43];
    bVar8 = iVar3 != 0x15;
    if (bVar8) {
      iVar3 = param_1[0x44];
    }
    if (bVar8 && iVar3 != 0x15) {
      uVar4 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(param_1,0);
      bVar8 = uVar4 == 0;
      if (bVar8) {
        uVar4 = (uint)*(byte *)(param_1 + 0x31);
      }
      if (bVar8 && uVar4 == 0) {
        iVar3 = param_2[1];
      }
      else {
        iVar3 = *param_2;
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = **(int **)(_UNK_01052964 + 0x1052948);
      iVar7 = *(int *)(iVar3 + 8);
      uVar4 = *(uint *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar4 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar4 + 1;
        piVar1 = (int *)(iVar7 + uVar4 * 4 + 0x10);
        *piVar1 = (int)param_1;
      }
      else {
        uVar4 = *(uint *)(iVar3 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar3,uVar4 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar5 = *(int *)(iVar3 + 8);
        *(uint *)(iVar3 + 0xc) = uVar4 + 1;
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar1 = (int *)(iVar5 + uVar4 * 4 + 0x10);
        *piVar1 = (int)param_1;
      }
      if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
        return;
      }
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar1 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar8 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar8);
      *puVar2 = *puVar2 | 1 << (((uint)piVar1 & 0x1ffff) >> 0xc);
      return;
    }
  }
  return;
}

