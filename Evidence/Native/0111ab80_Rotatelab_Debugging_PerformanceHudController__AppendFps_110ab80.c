/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$AppendFps
void Rotatelab_Debugging_PerformanceHudController__AppendFps (System_Text_StringBuilder_o* sb, System_String_o* label, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$AppendFps
   void Rotatelab_Debugging_PerformanceHudController__AppendFps (System_Text_StringBuilder_o* sb,
   System_String_o* label, float value, const MethodInfo* method); */

int Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
              (int param_1,undefined4 param_2,float param_3)

{
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  int iVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Text_StringBuilder__Append_2a16604(param_1,param_2,0);
  iVar2 = (int)param_3;
  uVar1 = in_fpscr & 0xfffffff | (uint)(param_3 == _UNK_0111ac84) << 0x1e;
  if (SUB41(uVar1 >> 0x1e,0)) {
    iVar2 = -0x80000000;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x16) & 3);
  fVar3 = (param_3 - fVar3) * 10.0 + 0.5;
  iVar4 = (int)fVar3;
  if (fVar3 == _UNK_0111ac84) {
    iVar4 = -0x80000000;
  }
  if (9 < iVar4) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a17344(param_1,iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a1726c(iVar2,0x2e,0);
  if (iVar2 != 0) {
    iVar2 = System_Text_StringBuilder__Append_2a17344(iVar2,iVar4,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x10) < *(int *)(*(int *)(iVar2 + 8) + 0xc)) {
      iVar4 = *(int *)(iVar2 + 8);
      uVar1 = *(uint *)(iVar2 + 0x10);
      *(uint *)(iVar2 + 0x10) = uVar1 + 1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924(*(uint *)(iVar4 + 0xc),10,0);
      }
      *(undefined2 *)(iVar4 + uVar1 * 2 + 0x10) = 10;
    }
    else {
      System_Text_StringBuilder__Append_2a15de0(iVar2,10,1,extraout_r3,unaff_r4,unaff_r5,unaff_r6);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

