/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController.<>c__DisplayClass31_0$$<VacuumVoxelsCoroutine>b__0
void Rotatelab_Boosters_VacuumBoosterController___c__DisplayClass31_0___VacuumVoxelsCoroutine_b__0 (Rotatelab_Boosters_VacuumBoosterController___c__DisplayClass31_0_o* __this, float index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Boosters.VacuumBoosterController.<>c__DisplayClass31_0$$<VacuumVoxelsCoroutine>b__0
   void 
   Rotatelab_Boosters_VacuumBoosterController___c__DisplayClass31_0___VacuumVoxelsCoroutine_b__0
   (Rotatelab_Boosters_VacuumBoosterController___c__DisplayClass31_0_o* __this, float index, const
   MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController___c__DisplayClass31_0___VacuumVoxelsCoroutine_b__0_1138e84
               (int param_1,float param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  
  pcVar3 = (char *)(_UNK_01148f40 + 0x1148ea0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148f44 + 0x1148eb4));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x10);
  fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar8 == param_2) << 0x1e | (uint)(param_2 <= fVar8) << 0x1d
  ;
  bVar1 = (byte)(uVar7 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    puVar5 = *(undefined4 **)(_UNK_01148f48 + 0x1148ee0);
    do {
      iVar6 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0xc),iVar4,*puVar5);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Boosters_VacuumBoosterController__VacuumVoxel_1138928(iVar6,uVar2);
      iVar4 = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x10) = iVar4;
      fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(uVar7 >> 0x16) & 3);
      uVar7 = uVar7 & 0xfffffff | (uint)(fVar8 == param_2) << 0x1e |
              (uint)(param_2 <= fVar8) << 0x1d;
      bVar1 = (byte)(uVar7 >> 0x18);
    } while (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6));
  }
  return;
}

