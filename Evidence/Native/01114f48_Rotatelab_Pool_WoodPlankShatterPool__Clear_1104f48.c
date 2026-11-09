/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Clear
void Rotatelab_Pool_WoodPlankShatterPool__Clear (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Clear
   void Rotatelab_Pool_WoodPlankShatterPool__Clear (Rotatelab_Pool_WoodPlankShatterPool_o* __this,
   const MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterPool__Clear_1104f48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_011151d4 + 0x1114f5c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011151d8 + 0x1114f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011151dc + 0x1114f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011151e0 + 0x1114f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011151e4 + 0x1114f94));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  puVar8 = *(undefined4 **)(_UNK_011151e8 + 0x1114fac);
  piVar7 = *(int **)(_UNK_011151ec + 0x1114fb4);
  do {
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xc) <= iVar6) {
      iVar6 = 0;
      do {
        if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x20) + 0xc) <= iVar6) {
          iVar6 = *(int *)(param_1 + 0x24);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *(int *)(iVar6 + 0xc);
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (0 < iVar2) {
            System_Array__Clear_2b96cdc(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
          }
          iVar6 = *(int *)(param_1 + 0x20);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *(int *)(iVar6 + 0xc);
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (iVar2 < 1) {
            return;
          }
          puVar8 = *(undefined4 **)(iVar6 + 8);
          if (puVar8 == (undefined4 *)0x0) {
            thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6df8 + 0x2ba6d44),0,iVar2,0,unaff_r4,
                               unaff_r5,unaff_r6,unaff_lr);
            uVar4 = thunk_FUN_00f00cdc();
            uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6dfc + 0x2ba6d58));
            System_ArgumentNullException___ctor_2b08d00(uVar4,uVar1,0);
          }
          else {
            if (iVar2 < 0) {
              thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e00 + 0x2ba6d78),0,iVar2,0,unaff_r4,
                                 unaff_r5,unaff_r6,unaff_lr);
              uVar4 = thunk_FUN_00f00cdc();
              uVar1 = *(undefined4 *)(_UNK_02ba6e04 + 0x2ba6d8c);
            }
            else {
              iVar6 = FUN_00ed20b8(puVar8,0);
              if (iVar6 < 1) {
                iVar3 = System_Array__get_Length_2b8bcdc(puVar8);
                if (-iVar6 <= iVar3 - iVar2) {
                  iVar3 = FUN_00f943a0(*puVar8);
                  FUN_00f88e5c((int)puVar8 + iVar3 * -iVar6 + 0x10,iVar3 * iVar2);
                  return;
                }
                thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e14 + 0x2ba6db8));
                uVar4 = thunk_FUN_00f00cdc();
                uVar1 = *(undefined4 *)(_UNK_02ba6e18 + 0x2ba6dcc);
              }
              else {
                thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e0c + 0x2ba6d98));
                uVar4 = thunk_FUN_00f00cdc();
                uVar1 = *(undefined4 *)(_UNK_02ba6e10 + 0x2ba6dac);
              }
            }
            uVar1 = thunk_FUN_00f23fd0(uVar1);
            System_IndexOutOfRangeException___ctor_2b69538(uVar4,uVar1,0);
          }
          uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e08 + 0x2ba6de8));
          func_0x00ec3920(uVar4,uVar1);
                    /* WARNING: Subroutine does not return */
          FUN_00ec3760();
        }
        if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x20),iVar6,*puVar8);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(param_1 + 0x20),iVar6,*puVar8);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Object__Destroy_3609820(uVar1,0);
        }
        iVar6 = iVar6 + 1;
      } while( true );
    }
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x24),iVar6,*puVar8);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x24),iVar6,*puVar8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__Destroy_3609820(uVar1,0);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

