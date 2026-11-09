/* IL2CPP: Rotatelab.Scripts.BlasterController$$TryFindTarget
bool Rotatelab_Scripts_BlasterController__TryFindTarget (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseTargetableController_o** targetable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$TryFindTarget
   bool Rotatelab_Scripts_BlasterController__TryFindTarget (Rotatelab_Scripts_BlasterController_o*
   __this, Rotatelab_Scripts_BaseTargetableController_o** targetable, const MethodInfo* method); */

bool Rotatelab_Scripts_BlasterController__TryFindTarget_10365a8(undefined4 param_1,int *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uStack_68;
  longlong *plStack_64;
  float fStack_60;
  uint uStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  
  pcVar5 = (char *)(_UNK_0104690c + 0x10465cc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046910 + 0x10465e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046914 + 0x10465ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046918 + 0x10465f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104691c + 0x1046604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046920 + 0x1046610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046924 + 0x104661c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046928 + 0x1046628));
    *pcVar5 = '\x01';
  }
  *param_2 = 0;
  lStack_58 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
  uStack_50 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
  thunk_FUN_00ec5080(param_2,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104692c + 0x104665c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar3 + 0x50);
  iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_68,iVar3,0);
  if (iVar8 != 0) {
    UnityEngine_Transform__InverseTransformPoint_3616aa0
              (&uStack_68,iVar8,uStack_68,plStack_64,fStack_60,0);
    uVar1 = CONCAT44(plStack_64,uStack_68);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01046930 + 0x10466f4));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_68,*(int *)(iVar3 + 0x14),**(undefined4 **)(_UNK_01046934 + 0x104672c));
    uStack_50 = (ulonglong)uStack_5c << 0x20;
    uStack_68 = 0;
    puVar6 = *(undefined4 **)(_UNK_01046938 + 0x1046758);
    piVar7 = *(int **)(_UNK_0104693c + 0x1046760);
    plStack_64 = &lStack_58;
    fVar10 = _UNK_01046908;
    while( true ) {
      do {
        iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                          (&lStack_58,*puVar6);
        if (iVar3 == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&lStack_58,**(undefined4 **)(_UNK_01046948 + 0x104684c));
          return *param_2 != 0;
        }
        piVar2 = uStack_50._4_4_;
        iVar3 = Rotatelab_Scripts_BlasterController__IsTargetableValid_10369e0
                          (param_1,uStack_50._4_4_);
      } while (iVar3 == 0);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *piVar2;
      uVar4 = (uint)*(byte *)(*piVar7 + 0xb8);
      if ((uVar4 <= *(byte *)(iVar3 + 0xb8)) &&
         (*(int *)(*(int *)(iVar3 + 100) + uVar4 * 4 + -4) == *piVar7)) {
        *param_2 = (int)piVar2;
        thunk_FUN_00ec5080(param_2,piVar2);
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&lStack_58,**(undefined4 **)(_UNK_01046940 + 0x104688c));
        return true;
      }
      iVar3 = (**(code **)(iVar3 + 0x100))(piVar2,*(undefined4 *)(iVar3 + 0x104));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0xc) == 0) break;
      uVar11 = FixedToFP(*(undefined8 *)(iVar3 + 0x10),0,0,0,0x20);
      fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x18),(byte)(in_fpscr >> 0x16) & 3)
      ;
      uVar11 = FloatVectorSub(uVar1,uVar11,2,0x20);
      uVar11 = FloatVectorMult(uVar11,uVar11,2,0x20);
      fVar9 = (float)uVar11 + (float)((ulonglong)uVar11 >> 0x20) +
              (fStack_60 - fVar9) * (fStack_60 - fVar9);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar10) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        *param_2 = (int)piVar2;
        thunk_FUN_00ec5080(param_2,piVar2);
        fVar10 = fVar9;
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

