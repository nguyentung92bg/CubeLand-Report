/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$Update
void Rotatelab_Scripts_FlyingPiggyController__Update (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$Update
   void Rotatelab_Scripts_FlyingPiggyController__Update (Rotatelab_Scripts_FlyingPiggyController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__Update_100e2d0(int *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  
  pcVar8 = (char *)(_UNK_0101e3d0 + 0x101e2e8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e3d4 + 0x101e2fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e3d8 + 0x101e308));
    *pcVar8 = '\x01';
  }
  bVar9 = (char)param_1[0x22] != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = (char)param_1[8];
  }
  if (bVar9 && cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x22) = 0;
    pcVar8 = (char *)(_UNK_0101e26c + 0x101e0d8);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101e270 + 0x101e0ec));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101e274 + 0x101e0f8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101e278 + 0x101e104));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101e27c + 0x101e110));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101e280 + 0x101e11c));
      *pcVar8 = '\x01';
    }
    piVar6 = *(int **)(_UNK_0101e284 + 0x101e130);
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar6;
    }
    iVar7 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x138);
    iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&stack0xffffffd0,iVar4,0);
    iVar4 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0101e288 + 0x101e190));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Vector3__object__Int32Enum__int___Raise_23a74b4
              (iVar7,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8);
    uVar17 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_0101e290 + 0x101e1f4));
    if ((int)uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__OnTemporaryCoinsCollected_1083c68
              ((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_1[0x1e],param_1[0x1e] >> 0x1f);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0101e294 + 0x101e22c));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0x15,0);
    (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
    return;
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101e3dc + 0x101e330));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar4 + 0x1c) != '\0') {
    return;
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101e3e0 + 0x101e360));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar4);
  fVar10 = _UNK_0101e3cc;
  if (iVar4 == 0) {
    fVar10 = (float)param_1[0x12];
  }
  fVar12 = (float)param_1[0x1a];
  param_1[0x1b] = (int)fVar10;
  fVar5 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  param_1[0x1a] = (int)(fVar12 + fVar10 * fVar5);
  if (param_1[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar15 = (float)param_1[0x1a] * _UNK_0101dec4;
  UnityEngine_Transform__get_right_3615130(&fStack_88,param_1[0x19],0);
  fVar12 = fStack_80;
  fVar5 = fStack_84;
  fVar10 = fStack_88;
  if (param_1[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_forward_36152b0(&fStack_88,param_1[0x19],0);
  sincosf(fVar15,&fStack_8c,&fStack_90);
  fVar3 = fStack_80;
  fVar2 = fStack_84;
  fVar15 = fStack_88;
  fVar14 = fStack_8c * fStack_88;
  fVar13 = fStack_8c * fStack_84;
  fVar11 = fStack_8c * fStack_80;
  fVar16 = (float)param_1[0x18];
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar4,(float)param_1[0x15] + (fVar14 + fStack_90 * fVar10) * fVar16,
             (float)param_1[0x16] + (fVar13 + fStack_90 * fVar5) * fVar16,
             (float)param_1[0x17] + (fVar11 + fStack_90 * fVar12) * fVar16);
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_1[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_up_36151f0(&fStack_88,param_1[0x19],0);
  fStack_78 = fStack_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_90 * fVar15 - fStack_8c * fVar10;
  fStack_68 = fStack_90 * fVar2 - fStack_8c * fVar5;
  fStack_64 = fStack_90 * fVar3 - fStack_8c * fVar12;
  UnityEngine_Quaternion__Internal_LookRotation_35ee358(&fStack_88,&fStack_6c,&fStack_78,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_rotation_3614e20(iVar4,fStack_88,fStack_84,fStack_80);
  return;
}

