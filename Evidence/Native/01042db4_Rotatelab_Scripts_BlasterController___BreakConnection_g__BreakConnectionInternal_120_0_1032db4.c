/* IL2CPP: Rotatelab.Scripts.BlasterController$$<BreakConnection>g__BreakConnectionInternal|120_0
void Rotatelab_Scripts_BlasterController___BreakConnection_g__BreakConnectionInternal_120_0 (Rotatelab_Scripts_BlasterController_o* from, Rotatelab_Scripts_BlasterController_o* to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$<BreakConnection>g__BreakConnectionInternal|120_0
   void Rotatelab_Scripts_BlasterController___BreakConnection_g__BreakConnectionInternal_120_0
   (Rotatelab_Scripts_BlasterController_o* from, Rotatelab_Scripts_BlasterController_o* to, const
   MethodInfo* method); */

uint Rotatelab_Scripts_BlasterController___BreakConnection_g__BreakConnectionInternal_120_0_1032db4
               (int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  pcVar4 = (char *)(_UNK_01042f40 + 0x1042dcc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042f44 + 0x1042de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042f48 + 0x1042dec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042f4c + 0x1042df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042f50 + 0x1042e04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042f54 + 0x1042e10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042f58 + 0x1042e1c));
    *pcVar4 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_01042f5c + 0x1042e3c);
  uVar6 = *(undefined4 *)(param_1 + 0x118);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar3[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar5 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01042f60 + 0x1042e88));
    System_Func_object__object__bool____ctor_239ea98
              (iVar7,uVar5,**(undefined4 **)(_UNK_01042f64 + 0x1042ea8),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar7;
    thunk_FUN_00ec5080(piVar8,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_01042f68 + 0x1042ed0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__object__1486d20
                    (uVar6,param_2,iVar7,**(undefined4 **)(_UNK_01042f6c + 0x1042ef4));
  if (iVar1 != 0) {
    Rotatelab_Scripts_ConnectionController__Break_1038d48(iVar1);
    iVar7 = *(int *)(param_1 + 0x118);
    if (iVar7 != 0) {
      uVar2 = System_Array__IndexOf_object__16445f0
                        (*(undefined4 *)(iVar7 + 8),iVar1,0,*(undefined4 *)(iVar7 + 0xc),
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01042f70 +
                                                                                  0x1042f34) + 0x10)
                                                              + 0x60) + 100) + 0x10) + 0x60) + 0xa4)
                        );
      if (-1 < (int)uVar2) {
        System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar7,uVar2);
      }
      return ~uVar2 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

